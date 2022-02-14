
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct flash_desc {int member_0; int member_1; int vendor_and_model_id; unsigned int size_mb; } ;
struct TYPE_2__ {unsigned int sf_size; unsigned int sf_nsec; } ;
struct adapter {TYPE_1__ params; int pdev_dev; } ;


 unsigned int FUNC_0 (struct flash_desc*) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_1 (int ,char*,int,...) ;
 int FUNC_2 (struct adapter*,int,int ,int,int*) ;
 int FUNC_3 (struct adapter*,int,int,int ,int ) ;
 int FUNC_4 (struct adapter*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct adapter *VAR_4)
{



 static struct flash_desc VAR_5[] = {
  { 0x150201, 4 << 20 },
 };

 unsigned int VAR_6, VAR_7;
 unsigned int VAR_8, VAR_9 = 0;
 u32 VAR_10 = 0;
 int VAR_11;







 VAR_11 = FUNC_3(VAR_4, 1, 1, 0, VAR_2);
 if (!VAR_11)
  VAR_11 = FUNC_2(VAR_4, 3, 0, 1, &VAR_10);
 FUNC_4(VAR_4, VAR_1, 0);
 if (VAR_11)
  return VAR_11;



 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_5); VAR_6++)
  if (VAR_5[VAR_6].vendor_and_model_id == VAR_10) {
   VAR_4->params.sf_size = VAR_5[VAR_6].size_mb;
   VAR_4->params.sf_nsec =
    VAR_4->params.sf_size / VAR_3;
   goto found;
  }
 VAR_7 = VAR_10 & 0xff;
 switch (VAR_7) {
 case 0x20: {



  VAR_8 = (VAR_10 >> 16) & 0xff;
  switch (VAR_8) {
  case 0x14:
   VAR_9 = 1 << 20;
   break;
  case 0x15:
   VAR_9 = 1 << 21;
   break;
  case 0x16:
   VAR_9 = 1 << 22;
   break;
  case 0x17:
   VAR_9 = 1 << 23;
   break;
  case 0x18:
   VAR_9 = 1 << 24;
   break;
  case 0x19:
   VAR_9 = 1 << 25;
   break;
  case 0x20:
   VAR_9 = 1 << 26;
   break;
  case 0x21:
   VAR_9 = 1 << 27;
   break;
  case 0x22:
   VAR_9 = 1 << 28;
   break;
  }
  break;
 }
 case 0x9d: {



  VAR_8 = (VAR_10 >> 16) & 0xff;
  switch (VAR_8) {
  case 0x16:
   VAR_9 = 1 << 25;
   break;
  case 0x17:
   VAR_9 = 1 << 26;
   break;
  }
  break;
 }
 case 0xc2: {



  VAR_8 = (VAR_10 >> 16) & 0xff;
  switch (VAR_8) {
  case 0x17:
   VAR_9 = 1 << 23;
   break;
  case 0x18:
   VAR_9 = 1 << 24;
   break;
  }
  break;
 }
 case 0xef: {



  VAR_8 = (VAR_10 >> 16) & 0xff;
  switch (VAR_8) {
  case 0x17:
   VAR_9 = 1 << 23;
   break;
  case 0x18:
   VAR_9 = 1 << 24;
   break;
  }
  break;
 }
 }







 if (VAR_9 == 0) {
  FUNC_1(VAR_4->pdev_dev, "Unknown Flash Part, ID = %#x, assuming 4MB\n",
    VAR_10);
  VAR_9 = 1 << 22;
 }


 VAR_4->params.sf_size = VAR_9;
 VAR_4->params.sf_nsec = VAR_9 / VAR_3;

found:
 if (VAR_4->params.sf_size < VAR_0)
  FUNC_1(VAR_4->pdev_dev, "WARNING: Flash Part ID %#x, size %#x < %#x\n",
    VAR_10, VAR_4->params.sf_size, VAR_0);
 return 0;
}
