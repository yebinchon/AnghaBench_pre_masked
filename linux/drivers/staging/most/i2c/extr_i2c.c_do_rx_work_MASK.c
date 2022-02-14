
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct mbo {int (* complete ) (struct mbo*) ;int status; int processed_length; int virt_address; int buffer_length; int list; } ;
struct TYPE_2__ {int list; } ;
struct hdm_i2c {TYPE_1__ rx; int client; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,unsigned char*,int) ;
 int FUNC_1 (int *) ;
 struct mbo* FUNC_2 (int *) ;
 int FUNC_3 (int ,unsigned char*,int ) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (struct mbo*) ;

__attribute__((used)) static void FUNC_7(struct hdm_i2c *VAR_2)
{
 struct mbo *VAR_3;
 unsigned char VAR_4[VAR_0];
 int VAR_5;
 u16 VAR_6, VAR_7;


 VAR_5 = FUNC_0(VAR_2->client, VAR_4, 2);
 if (VAR_5 <= 0) {
  FUNC_5("Failed to receive PML\n");
  return;
 }

 VAR_6 = (VAR_4[0] << 8) | VAR_4[1];
 if (!VAR_6)
  return;

 VAR_7 = VAR_6 + 2;


 VAR_5 = FUNC_0(VAR_2->client, VAR_4, VAR_7);
 if (VAR_5 <= 0) {
  FUNC_5("Failed to receive a Port Message\n");
  return;
 }

 VAR_3 = FUNC_2(&VAR_2->rx.list);
 FUNC_1(&VAR_3->list);

 VAR_3->processed_length = FUNC_4(VAR_7, VAR_3->buffer_length);
 FUNC_3(VAR_3->virt_address, VAR_4, VAR_3->processed_length);
 VAR_3->status = VAR_1;
 VAR_3->complete(VAR_3);
}
