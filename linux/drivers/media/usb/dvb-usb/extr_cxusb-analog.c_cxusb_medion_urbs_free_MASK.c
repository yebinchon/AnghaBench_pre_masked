
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cxusb_medion_dev {TYPE_1__** streamurbs; } ;
struct TYPE_2__ {int transfer_buffer; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(struct cxusb_medion_dev *VAR_1)
{
 unsigned int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  if (VAR_1->streamurbs[VAR_2]) {
   FUNC_0(VAR_1->streamurbs[VAR_2]->transfer_buffer);
   FUNC_1(VAR_1->streamurbs[VAR_2]);
   VAR_1->streamurbs[VAR_2] = ((void*)0);
  }
}
