
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ max_range_640_480; } ;
struct cx231xx {TYPE_1__ board; } ;



__attribute__((used)) static inline unsigned int FUNC_0(struct cx231xx *VAR_0)
{
 if (VAR_0->board.max_range_640_480)
  return 640;
 else
  return 720;
}
