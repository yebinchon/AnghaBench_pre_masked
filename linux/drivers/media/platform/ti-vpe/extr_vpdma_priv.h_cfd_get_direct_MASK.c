
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vpdma_cfd {int ctl_payload_len; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline bool FUNC_0(struct vpdma_cfd *VAR_2)
{
 return (VAR_2->ctl_payload_len >> VAR_1) & VAR_0;
}
