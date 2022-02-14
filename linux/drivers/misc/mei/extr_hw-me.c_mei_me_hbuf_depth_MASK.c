
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mei_me_hw {int hbuf_depth; } ;
struct mei_device {int dummy; } ;


 struct mei_me_hw* FUNC_0 (struct mei_device const*) ;

__attribute__((used)) static u32 FUNC_1(const struct mei_device *VAR_0)
{
 struct mei_me_hw *VAR_1 = FUNC_0(VAR_0);

 return VAR_1->hbuf_depth;
}
