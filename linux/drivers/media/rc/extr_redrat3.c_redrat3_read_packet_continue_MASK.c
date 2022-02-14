
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int length; } ;
struct TYPE_4__ {TYPE_1__ header; } ;
struct redrat3_dev {unsigned int bytes_read; TYPE_2__ irdata; int dev; int bulk_in_buf; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int,int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (void*,int ,unsigned int) ;

__attribute__((used)) static void FUNC_4(struct redrat3_dev *VAR_0, unsigned VAR_1)
{
 void *VAR_2 = &VAR_0->irdata;

 if (VAR_1 + VAR_0->bytes_read > sizeof(VAR_0->irdata)) {
  FUNC_2(VAR_0->dev, "too much data for packet\n");
  VAR_0->bytes_read = 0;
  return;
 }

 FUNC_3(VAR_2 + VAR_0->bytes_read, VAR_0->bulk_in_buf, VAR_1);

 VAR_0->bytes_read += VAR_1;
 FUNC_1(VAR_0->dev, "bytes_read %d, pktlen %d\n", VAR_0->bytes_read,
     FUNC_0(VAR_0->irdata.header.length));
}
