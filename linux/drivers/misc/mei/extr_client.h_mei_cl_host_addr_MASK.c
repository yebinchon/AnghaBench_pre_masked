
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mei_cl {int host_client_id; } ;


 scalar_t__ FUNC_0 (struct mei_cl const*) ;

__attribute__((used)) static inline u8 FUNC_1(const struct mei_cl *VAR_0)
{
 return FUNC_0(VAR_0) ? 0 : VAR_0->host_client_id;
}
