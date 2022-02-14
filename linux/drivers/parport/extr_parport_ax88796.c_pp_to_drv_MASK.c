
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parport {struct ax_drvdata* private_data; } ;
struct ax_drvdata {int dummy; } ;



__attribute__((used)) static inline struct ax_drvdata *FUNC_0(struct parport *VAR_0)
{
 return VAR_0->private_data;
}
