
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct nfsd4_layout_seg {scalar_t__ offset; scalar_t__ length; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline u64
FUNC_0(struct nfsd4_layout_seg *VAR_1)
{
 u64 VAR_2 = VAR_1->offset + VAR_1->length;
 return VAR_2 >= VAR_1->offset ? VAR_2 : VAR_0;
}
