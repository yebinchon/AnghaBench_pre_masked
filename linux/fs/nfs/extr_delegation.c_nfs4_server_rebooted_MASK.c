
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_client {int cl_state; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static inline bool FUNC_1(const struct nfs_client *VAR_3)
{
 return (VAR_3->cl_state & (FUNC_0(VAR_0) |
    FUNC_0(VAR_1) |
    FUNC_0(VAR_2))) != 0;
}
