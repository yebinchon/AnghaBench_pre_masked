
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct nfsd4_slot {int dummy; } ;
struct nfsd4_channel_attrs {scalar_t__ maxresp_cached; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline u32 FUNC_0(struct nfsd4_channel_attrs *VAR_1)
{
 u32 VAR_2;

 if (VAR_1->maxresp_cached < VAR_0)
  VAR_2 = 0;
 else
  VAR_2 = VAR_1->maxresp_cached - VAR_0;
 return VAR_2 + sizeof(struct nfsd4_slot);
}
