
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct map_info {int name; struct cfi_private* fldrv_priv; } ;
struct flchip {int start; } ;
struct cfi_private {int device_type; int addr_unlock1; } ;
typedef int map_word ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_0 (int) ;
 unsigned long FUNC_1 (int ) ;
 int FUNC_2 (int,int ,int ,struct map_info*,struct cfi_private*,int ,int *) ;
 int FUNC_3 (struct cfi_private*) ;
 int FUNC_4 (struct map_info*,unsigned long) ;
 scalar_t__ FUNC_5 (struct map_info*,int ,int ) ;
 int FUNC_6 (char*,int ,unsigned long) ;

__attribute__((used)) static void FUNC_7(struct map_info *VAR_4, struct flchip *VAR_5,
     unsigned long VAR_6)
{
 struct cfi_private *VAR_7 = VAR_4->fldrv_priv;
 map_word VAR_8;

 if (!FUNC_3(VAR_7))
  return;

 FUNC_2(0x70, VAR_7->addr_unlock1, VAR_5->start, VAR_4, VAR_7,
    VAR_7->device_type, ((void*)0));
 VAR_8 = FUNC_4(VAR_4, VAR_6);

 if (FUNC_5(VAR_4, VAR_8, FUNC_0(0x3a))) {
  unsigned long VAR_9 = FUNC_1(VAR_8);

  if (VAR_9 & VAR_0)
   FUNC_6("%s erase operation failed, status %lx\n",
          VAR_4->name, VAR_9);
  if (VAR_9 & VAR_1)
   FUNC_6("%s program operation failed, status %lx\n",
          VAR_4->name, VAR_9);
  if (VAR_9 & VAR_3)
   FUNC_6("%s buffer program command aborted, status %lx\n",
          VAR_4->name, VAR_9);
  if (VAR_9 & VAR_2)
   FUNC_6("%s sector write protected, status %lx\n",
          VAR_4->name, VAR_9);
 }
}
