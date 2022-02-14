
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cm_dev {void** rx_buf; int rx_slots; int mport; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ,int ) ;
 int FUNC_1 (char*,void*) ;

__attribute__((used)) static void *FUNC_2(struct cm_dev *VAR_2)
{
 void *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_0(VAR_2->mport, VAR_1);
 if (VAR_3) {
  for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
   if (VAR_2->rx_buf[VAR_4] == VAR_3) {
    VAR_2->rx_buf[VAR_4] = ((void*)0);
    VAR_2->rx_slots++;
    break;
   }
  }

  if (VAR_4 == VAR_0)
   FUNC_1("no record for buffer 0x%p", VAR_3);
 }

 return VAR_3;
}
