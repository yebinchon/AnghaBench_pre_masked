
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct chp_id {size_t id; int cssid; } ;
struct channel_path {int dummy; } ;
struct TYPE_2__ {struct channel_path** chps; } ;


 TYPE_1__* FUNC_0 (int ) ;

__attribute__((used)) static inline struct channel_path *FUNC_1(struct chp_id VAR_0)
{
 return FUNC_0(VAR_0.cssid)->chps[VAR_0.id];
}
