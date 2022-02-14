
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int block_size; } ;
struct se_device {TYPE_1__ dev_attrib; } ;
struct request_queue {int dummy; } ;
struct block_device {int bd_inode; } ;


 int FUNC_0 (struct block_device*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static unsigned long long FUNC_3(
 struct se_device *VAR_0,
 struct block_device *VAR_1,
 struct request_queue *VAR_2)
{
 unsigned long long VAR_3 = (FUNC_1(FUNC_2(VAR_1->bd_inode),
     FUNC_0(VAR_1)) - 1);
 u32 VAR_4 = FUNC_0(VAR_1);

 if (VAR_4 == VAR_0->dev_attrib.block_size)
  return VAR_3;

 switch (VAR_4) {
 case 4096:
  switch (VAR_0->dev_attrib.block_size) {
  case 2048:
   VAR_3 <<= 1;
   break;
  case 1024:
   VAR_3 <<= 2;
   break;
  case 512:
   VAR_3 <<= 3;
  default:
   break;
  }
  break;
 case 2048:
  switch (VAR_0->dev_attrib.block_size) {
  case 4096:
   VAR_3 >>= 1;
   break;
  case 1024:
   VAR_3 <<= 1;
   break;
  case 512:
   VAR_3 <<= 2;
   break;
  default:
   break;
  }
  break;
 case 1024:
  switch (VAR_0->dev_attrib.block_size) {
  case 4096:
   VAR_3 >>= 2;
   break;
  case 2048:
   VAR_3 >>= 1;
   break;
  case 512:
   VAR_3 <<= 1;
   break;
  default:
   break;
  }
  break;
 case 512:
  switch (VAR_0->dev_attrib.block_size) {
  case 4096:
   VAR_3 >>= 3;
   break;
  case 2048:
   VAR_3 >>= 2;
   break;
  case 1024:
   VAR_3 >>= 1;
   break;
  default:
   break;
  }
  break;
 default:
  break;
 }

 return VAR_3;
}
