
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device*,char*,...) ;
 scalar_t__ FUNC_1 (struct device*,int ) ;
 int FUNC_2 (struct device*,int ,int*) ;
 int FUNC_3 (struct device*,int ,scalar_t__*) ;
 int FUNC_4 (struct device*,int ,scalar_t__*,scalar_t__) ;
 int FUNC_5 (struct device*,scalar_t__*) ;
 scalar_t__* FUNC_6 (struct device*,scalar_t__,int,int ) ;

__attribute__((used)) static void FUNC_7(struct device *VAR_4,
            u8 *VAR_5, u32 *VAR_6,
            u8 **VAR_7)
{
 int VAR_8;
 u8 VAR_9;

 VAR_8 = FUNC_3(VAR_4, VAR_1, VAR_5);
 if (VAR_8) {
  FUNC_0(VAR_4, "Using default clock type");
  *VAR_5 = 0;
 }

 VAR_8 = FUNC_2(VAR_4, VAR_0, VAR_6);
 if (VAR_8) {
  FUNC_0(VAR_4, "Using default clock frequency\n");
  *VAR_6 = 26000;
 }

 if (FUNC_1(VAR_4, VAR_2)) {
  VAR_8 = FUNC_3(VAR_4, VAR_2,
         &VAR_9);

  if (VAR_8 || VAR_9 <= 0)
   goto vsc_read_err;


  VAR_9++;

  *VAR_7 = FUNC_6(VAR_4,
        VAR_9, sizeof(**VAR_7),
        VAR_3);

  VAR_8 = FUNC_4(VAR_4, VAR_2,
        *VAR_7, VAR_9);

  if (VAR_8) {
   FUNC_5(VAR_4, *VAR_7);
   goto vsc_read_err;
  }
 } else {
vsc_read_err:
  FUNC_0(VAR_4, "FW vendor specific commands not present\n");
  *VAR_7 = ((void*)0);
 }

 FUNC_0(VAR_4, "Clock type: %d, clock frequency: %d, VSC: %s",
  *VAR_5, *VAR_6, *VAR_7 != ((void*)0) ? "yes" : "no");
}
