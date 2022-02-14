
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tape_request {int * callback_data; void* callback; } ;
struct tape_device {int dummy; } ;


 int FUNC_0 (struct tape_device*,struct tape_request*) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static inline void
FUNC_1(struct tape_device *VAR_1, struct tape_request *VAR_2)
{
 VAR_2->callback = (void *) VAR_0;
 VAR_2->callback_data = ((void*)0);
 FUNC_0(VAR_1, VAR_2);
}
