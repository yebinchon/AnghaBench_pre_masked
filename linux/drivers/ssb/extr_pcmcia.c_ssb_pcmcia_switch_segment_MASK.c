
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ssb_bus {int mapped_pcmcia_seg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct ssb_bus*,int ,int*) ;
 int FUNC_3 (struct ssb_bus*,int ,int) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;

int FUNC_6(struct ssb_bus *VAR_3, u8 VAR_4)
{
 int VAR_5 = 0;
 int VAR_6;
 u8 VAR_7;

 FUNC_0((VAR_4 != 0) && (VAR_4 != 1));
 while (1) {
  VAR_6 = FUNC_3(VAR_3, VAR_2, VAR_4);
  if (VAR_6)
   goto error;
  VAR_6 = FUNC_2(VAR_3, VAR_2, &VAR_7);
  if (VAR_6)
   goto error;
  if (VAR_7 == VAR_4)
   break;

  VAR_6 = -VAR_0;
  if (FUNC_5(VAR_5++ > VAR_1))
   goto error;
  FUNC_4(10);
 }
 VAR_3->mapped_pcmcia_seg = VAR_4;

 return 0;
error:
 FUNC_1("Failed to switch pcmcia segment\n");
 return VAR_6;
}
