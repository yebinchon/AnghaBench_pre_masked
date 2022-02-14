
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct idal_buffer {int dummy; } ;
struct ccw1 {scalar_t__ flags; int cmd_code; } ;
typedef int __u8 ;


 int FUNC_0 (struct idal_buffer*,struct ccw1*) ;

__attribute__((used)) static inline struct ccw1 *
FUNC_1(struct ccw1 *VAR_0, __u8 VAR_1, struct idal_buffer *VAR_2)
{
 VAR_0->cmd_code = VAR_1;
 VAR_0->flags = 0;
 FUNC_0(VAR_2, VAR_0);
 return VAR_0++;
}
