
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct rvu {scalar_t__ cgx_mapped_pfs; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline bool FUNC_0(struct rvu *VAR_1, u8 VAR_2)
{
 return (VAR_2 >= VAR_0 && VAR_2 <= VAR_1->cgx_mapped_pfs);
}
