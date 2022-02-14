
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pnfs_layout_hdr {int plh_retry_timestamp; int plh_flags; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct pnfs_layout_hdr*,int) ;
 scalar_t__ FUNC_2 (int,int *) ;
 int FUNC_3 (int ,unsigned long,unsigned long) ;

__attribute__((used)) static bool
FUNC_4(struct pnfs_layout_hdr *VAR_2, u32 VAR_3)
{
 unsigned long VAR_4, VAR_5;
 int VAR_6 = FUNC_0(VAR_3);

 if (FUNC_2(VAR_6, &VAR_2->plh_flags) == 0)
  return 0;
 VAR_5 = VAR_1;
 VAR_4 = VAR_5 - VAR_0;
 if (!FUNC_3(VAR_2->plh_retry_timestamp, VAR_4, VAR_5)) {

  FUNC_1(VAR_2, VAR_6);
  return 0;
 }
 return 1;
}
