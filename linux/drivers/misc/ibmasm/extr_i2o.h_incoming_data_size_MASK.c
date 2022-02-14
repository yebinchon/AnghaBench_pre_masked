
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int message_size; } ;
struct i2o_message {TYPE_1__ header; } ;



__attribute__((used)) static inline u32 FUNC_0(struct i2o_message *VAR_0)
{
 return (sizeof(u32) * VAR_0->header.message_size);
}
