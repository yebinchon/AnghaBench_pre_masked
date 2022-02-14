
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subscribed_event {unsigned int first; unsigned int elems; } ;



__attribute__((used)) static unsigned FUNC_0(const struct v4l2_subscribed_event *VAR_0, unsigned VAR_1)
{
 VAR_1 += VAR_0->first;
 return VAR_1 >= VAR_0->elems ? VAR_1 - VAR_0->elems : VAR_1;
}
