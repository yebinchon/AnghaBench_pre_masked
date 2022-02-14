
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb_hdr {int dummy; } ;
typedef int __u16 ;
typedef int __le16 ;


 scalar_t__ FUNC_0 (struct smb_hdr*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline __u16
FUNC_2(struct smb_hdr *VAR_0)
{
 __le16 *VAR_1 = (__le16 *)FUNC_0(VAR_0);

 return FUNC_1(VAR_1);
}
