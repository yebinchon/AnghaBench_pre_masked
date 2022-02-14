
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct camera_data {int APP_len; int APPn; TYPE_1__* workbuff; int APP_data; } ;
struct TYPE_2__ {int* data; int length; } ;


 int FUNC_0 (int*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct camera_data *VAR_0)
{
 if(VAR_0->APP_len > 0) {
  VAR_0->workbuff->data[VAR_0->workbuff->length++] = 0xFF;
  VAR_0->workbuff->data[VAR_0->workbuff->length++] = 0xE0+VAR_0->APPn;
  VAR_0->workbuff->data[VAR_0->workbuff->length++] = 0;
  VAR_0->workbuff->data[VAR_0->workbuff->length++] = VAR_0->APP_len+2;
  FUNC_0(VAR_0->workbuff->data+VAR_0->workbuff->length,
         VAR_0->APP_data, VAR_0->APP_len);
  VAR_0->workbuff->length += VAR_0->APP_len;
 }
}
