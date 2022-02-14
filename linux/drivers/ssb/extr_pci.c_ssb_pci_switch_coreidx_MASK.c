
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ssb_bus {int host_pci; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int*) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int) ;

int FUNC_4(struct ssb_bus *VAR_5, u8 VAR_6)
{
 int VAR_7;
 int VAR_8 = 0;
 u32 VAR_9;

 while (1) {
  VAR_7 = FUNC_1(VAR_5->host_pci, VAR_2,
          (VAR_6 * VAR_3)
          + VAR_4);
  if (VAR_7)
   goto error;
  VAR_7 = FUNC_0(VAR_5->host_pci, VAR_2,
         &VAR_9);
  if (VAR_7)
   goto error;
  VAR_9 = (VAR_9 - VAR_4)
      / VAR_3;
  if (VAR_9 == VAR_6)
   break;

  if (VAR_8++ > VAR_1)
   goto error;
  FUNC_3(10);
 }
 return 0;
error:
 FUNC_2("Failed to switch to core %u\n", VAR_6);
 return -VAR_0;
}
