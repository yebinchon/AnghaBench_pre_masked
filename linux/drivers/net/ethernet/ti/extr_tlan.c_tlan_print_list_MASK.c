
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tlan_list {TYPE_1__* buffer; int frame_size; int c_stat; int forward; } ;
struct TYPE_2__ {int address; int count; } ;


 int FUNC_0 (char*,...) ;

__attribute__((used)) static void FUNC_1(struct tlan_list *VAR_0, char *VAR_1, int VAR_2)
{
 int VAR_3;

 FUNC_0("%s List %d at %p\n", VAR_1, VAR_2, VAR_0);
 FUNC_0("   Forward    = 0x%08x\n", VAR_0->forward);
 FUNC_0("   CSTAT      = 0x%04hx\n", VAR_0->c_stat);
 FUNC_0("   Frame Size = 0x%04hx\n", VAR_0->frame_size);

 for (VAR_3 = 0; VAR_3 < 2; VAR_3++) {
  FUNC_0("   Buffer[%d].count, addr = 0x%08x, 0x%08x\n",
   VAR_3, VAR_0->buffer[VAR_3].count, VAR_0->buffer[VAR_3].address);
 }

}
