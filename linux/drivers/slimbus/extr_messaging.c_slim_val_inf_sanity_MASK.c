
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct slim_val_inf {int num_bytes; int start_offset; int * wbuf; int * rbuf; } ;
struct slim_controller {int dev; } ;


 int VAR_0 ;






 int FUNC_0 (int ,char*,int,int) ;

__attribute__((used)) static int FUNC_1(struct slim_controller *VAR_1,
          struct slim_val_inf *VAR_2, u8 VAR_3)
{
 if (!VAR_2 || VAR_2->num_bytes > 16 ||
     (VAR_2->start_offset + VAR_2->num_bytes) > 0xC00)
  goto reterr;
 switch (VAR_3) {
 case 128:
 case 129:
  if (VAR_2->rbuf != ((void*)0))
   return 0;
  break;

 case 133:
 case 132:
  if (VAR_2->wbuf != ((void*)0))
   return 0;
  break;

 case 131:
 case 130:
  if (VAR_2->rbuf != ((void*)0) && VAR_2->wbuf != ((void*)0))
   return 0;
  break;
 }
reterr:
 if (VAR_2)
  FUNC_0(VAR_1->dev, "Sanity check failed:msg:offset:0x%x, mc:%d\n",
   VAR_2->start_offset, VAR_3);
 return -VAR_0;
}
