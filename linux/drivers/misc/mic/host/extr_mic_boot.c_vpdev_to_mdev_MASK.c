
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mic_device {int dummy; } ;
struct device {int parent; } ;


 struct mic_device* FUNC_0 (int ) ;

__attribute__((used)) static inline struct mic_device *FUNC_1(struct device *VAR_0)
{
 return FUNC_0(VAR_0->parent);
}
