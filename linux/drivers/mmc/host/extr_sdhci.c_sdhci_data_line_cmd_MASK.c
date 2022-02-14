
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_command {int flags; scalar_t__ data; } ;


 int VAR_0 ;

__attribute__((used)) static inline bool FUNC_0(struct mmc_command *VAR_1)
{
 return VAR_1->data || VAR_1->flags & VAR_0;
}
