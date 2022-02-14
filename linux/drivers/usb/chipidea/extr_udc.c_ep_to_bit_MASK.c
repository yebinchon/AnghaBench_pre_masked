
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ci_hdrc {int hw_ep_max; } ;



__attribute__((used)) static inline int FUNC_0(struct ci_hdrc *VAR_0, int VAR_1)
{
 int VAR_2 = 16 - VAR_0->hw_ep_max / 2;

 if (VAR_1 >= VAR_0->hw_ep_max / 2)
  VAR_1 += VAR_2;

 return VAR_1;
}
