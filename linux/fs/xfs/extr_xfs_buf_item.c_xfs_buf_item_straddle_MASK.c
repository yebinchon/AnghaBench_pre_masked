
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint ;
struct xfs_buf {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct xfs_buf*,scalar_t__) ;

__attribute__((used)) static inline bool
FUNC_1(
 struct xfs_buf *VAR_2,
 uint VAR_3,
 int VAR_4,
 int VAR_5)
{
 return FUNC_0(VAR_2, VAR_3 + (VAR_4 << VAR_1)) !=
  (FUNC_0(VAR_2, VAR_3 + (VAR_5 << VAR_1)) +
   VAR_0);
}
