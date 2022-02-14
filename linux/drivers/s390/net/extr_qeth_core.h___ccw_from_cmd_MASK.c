
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qeth_cmd_buffer {int length; scalar_t__ data; } ;
struct ccw1 {int dummy; } ;


 scalar_t__ FUNC_0 (int ,int) ;

__attribute__((used)) static inline struct ccw1 *FUNC_1(struct qeth_cmd_buffer *VAR_0)
{
 return (struct ccw1 *)(VAR_0->data + FUNC_0(VAR_0->length, 8));
}
