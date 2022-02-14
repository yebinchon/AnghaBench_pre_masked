
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mei_me_hw {unsigned char hbuf_depth; } ;
struct mei_device {int dummy; } ;


 int VAR_0 ;
 unsigned char FUNC_0 (struct mei_device*) ;
 struct mei_me_hw* FUNC_1 (struct mei_device*) ;

__attribute__((used)) static int FUNC_2(struct mei_device *VAR_1)
{
 struct mei_me_hw *VAR_2 = FUNC_1(VAR_1);
 unsigned char VAR_3, VAR_4;

 VAR_3 = FUNC_0(VAR_1);
 VAR_4 = VAR_2->hbuf_depth - VAR_3;


 if (VAR_3 > VAR_2->hbuf_depth)
  return -VAR_0;

 return VAR_4;
}
