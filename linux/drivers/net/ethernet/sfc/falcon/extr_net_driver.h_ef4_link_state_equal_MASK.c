
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ef4_link_state {scalar_t__ up; scalar_t__ fd; scalar_t__ fc; scalar_t__ speed; } ;



__attribute__((used)) static inline bool FUNC_0(const struct ef4_link_state *VAR_0,
     const struct ef4_link_state *VAR_1)
{
 return VAR_0->up == VAR_1->up && VAR_0->fd == VAR_1->fd &&
  VAR_0->fc == VAR_1->fc && VAR_0->speed == VAR_1->speed;
}
