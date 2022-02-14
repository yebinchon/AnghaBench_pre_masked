
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb_hdr {int Mid; } ;
typedef scalar_t__ __u16 ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static inline bool
FUNC_1(__u16 VAR_0, const struct smb_hdr *VAR_1)
{
 return VAR_0 == FUNC_0(VAR_1->Mid);
}
