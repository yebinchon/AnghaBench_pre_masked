
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ssb_bus {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct ssb_bus*,int ) ;
 int FUNC_4 (struct ssb_bus*,int,int const) ;

__attribute__((used)) static int FUNC_5(struct ssb_bus *VAR_4, const u16 *VAR_5)
{
 int VAR_6, VAR_7;
 bool VAR_8 = 0;
 size_t VAR_9 = VAR_3;

 FUNC_2("Writing SPROM. Do NOT turn off the power! Please stand by...\n");
 VAR_7 = FUNC_3(VAR_4, VAR_2);
 if (VAR_7) {
  FUNC_2("Could not enable SPROM write access\n");
  return -VAR_0;
 }
 FUNC_2("[ 0%%");
 FUNC_0(500);
 for (VAR_6 = 0; VAR_6 < VAR_9; VAR_6++) {
  if (VAR_6 == VAR_9 / 4)
   FUNC_1("25%%");
  else if (VAR_6 == VAR_9 / 2)
   FUNC_1("50%%");
  else if (VAR_6 == (VAR_9 * 3) / 4)
   FUNC_1("75%%");
  else if (VAR_6 % 2)
   FUNC_1(".");
  VAR_7 = FUNC_4(VAR_4, VAR_6, VAR_5[VAR_6]);
  if (VAR_7) {
   FUNC_2("Failed to write to SPROM\n");
   VAR_8 = 1;
   break;
  }
 }
 VAR_7 = FUNC_3(VAR_4, VAR_1);
 if (VAR_7) {
  FUNC_2("Could not disable SPROM write access\n");
  VAR_8 = 1;
 }
 FUNC_0(500);
 if (!VAR_8) {
  FUNC_1("100%% ]\n");
  FUNC_2("SPROM written\n");
 }

 return VAR_8 ? -VAR_0 : 0;
}
