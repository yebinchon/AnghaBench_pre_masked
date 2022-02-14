
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct c2port_ops {size_t block_size; size_t blocks_num; } ;
struct c2port_device {struct c2port_ops* ops; } ;
typedef size_t ssize_t ;
typedef size_t loff_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (struct c2port_device*) ;
 int FUNC_1 (struct c2port_device*) ;
 int FUNC_2 (struct c2port_device*,...) ;
 int FUNC_3 (struct c2port_device*,int ) ;
 int FUNC_4 (struct c2port_device*,size_t) ;

__attribute__((used)) static ssize_t FUNC_5(struct c2port_device *VAR_4,
    char *VAR_5, loff_t VAR_6, size_t VAR_7)
{
 struct c2port_ops *VAR_8 = VAR_4->ops;
 u8 VAR_9, VAR_10 = 128;
 int VAR_11, VAR_12;


 if (VAR_6 >= VAR_8->block_size * VAR_8->blocks_num)
  return 0;

 if (VAR_8->block_size * VAR_8->blocks_num - VAR_6 < VAR_10)
  VAR_10 = VAR_8->block_size * VAR_8->blocks_num - VAR_6;
 if (VAR_7 < VAR_10)
  VAR_10 = VAR_7;
 if (VAR_10 == 0)
  return VAR_10;



 FUNC_3(VAR_4, VAR_2);


 FUNC_4(VAR_4, VAR_0);


 VAR_12 = FUNC_0(VAR_4);
 if (VAR_12 < 0)
  return VAR_12;




 VAR_12 = FUNC_1(VAR_4);
 if (VAR_12 < 0)
  return VAR_12;


 VAR_12 = FUNC_2(VAR_4, &VAR_9);
 if (VAR_12 < 0)
  return VAR_12;
 if (VAR_9 != VAR_1)
  return -VAR_3;


 FUNC_4(VAR_4, VAR_6 >> 8);
 VAR_12 = FUNC_0(VAR_4);
 if (VAR_12 < 0)
  return VAR_12;


 FUNC_4(VAR_4, VAR_6 & 0x00ff);
 VAR_12 = FUNC_0(VAR_4);
 if (VAR_12 < 0)
  return VAR_12;


 FUNC_4(VAR_4, VAR_10);
 VAR_12 = FUNC_0(VAR_4);
 if (VAR_12 < 0)
  return VAR_12;




 VAR_12 = FUNC_1(VAR_4);
 if (VAR_12 < 0)
  return VAR_12;


 VAR_12 = FUNC_2(VAR_4, &VAR_9);
 if (VAR_12 < 0)
  return VAR_12;
 if (VAR_9 != VAR_1)
  return -VAR_3;


 for (VAR_11 = 0; VAR_11 < VAR_10; VAR_11++) {
  VAR_12 = FUNC_1(VAR_4);
  if (VAR_12 < 0)
   return VAR_12;

  VAR_12 = FUNC_2(VAR_4, VAR_5+VAR_11);
  if (VAR_12 < 0)
   return VAR_12;
 }

 return VAR_10;
}
