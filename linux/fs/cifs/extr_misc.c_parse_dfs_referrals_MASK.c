
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nls_table {int dummy; } ;
struct get_dfs_referral_rsp {scalar_t__ NumberOfReferrals; scalar_t__ PathConsumed; int DFSFlags; int referrals; } ;
struct dfs_referral_level_3 {scalar_t__ VersionNumber; scalar_t__ ServerType; scalar_t__ ReferralEntryFlags; scalar_t__ DfsPathOffset; scalar_t__ NetworkAddressOffset; int TimeToLive; } ;
struct dfs_info3_param {int path_consumed; int server_type; int ref_flag; void* ttl; void* node_name; void* path_name; void* flags; } ;
typedef int __le16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,char const*,int ,struct nls_table const*,int) ;
 int FUNC_1 (int ,char*,unsigned int,...) ;
 void* FUNC_2 (char*,int,int,struct nls_table const*) ;
 int FUNC_3 (int *,int,struct nls_table const*) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (struct dfs_info3_param*,unsigned int) ;
 struct dfs_info3_param* FUNC_6 (unsigned int,int,int ) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int,int ) ;
 int FUNC_9 (scalar_t__) ;
 void* FUNC_10 (int ) ;
 int FUNC_11 (char const*) ;

int
FUNC_12(struct get_dfs_referral_rsp *VAR_6, u32 VAR_7,
      unsigned int *VAR_8,
      struct dfs_info3_param **VAR_9,
      const struct nls_table *VAR_10, int VAR_11,
      const char *VAR_12, bool VAR_13)
{
 int VAR_14, VAR_15 = 0;
 char *VAR_16;
 struct dfs_referral_level_3 *VAR_17;

 *VAR_8 = FUNC_9(VAR_6->NumberOfReferrals);

 if (*VAR_8 < 1) {
  FUNC_1(VAR_5, "num_referrals: must be at least > 0, but we get num_referrals = %d\n",
    *VAR_8);
  VAR_15 = -VAR_0;
  goto parse_DFS_referrals_exit;
 }

 VAR_17 = (struct dfs_referral_level_3 *) &(VAR_6->referrals);
 if (VAR_17->VersionNumber != FUNC_4(3)) {
  FUNC_1(VAR_5, "Referrals of V%d version are not supported, should be V3\n",
    FUNC_9(VAR_17->VersionNumber));
  VAR_15 = -VAR_0;
  goto parse_DFS_referrals_exit;
 }


 VAR_16 = (char *)VAR_6 + VAR_7;

 FUNC_1(VAR_2, "num_referrals: %d dfs flags: 0x%x ...\n",
   *VAR_8, FUNC_10(VAR_6->DFSFlags));

 *VAR_9 = FUNC_6(*VAR_8, sizeof(struct dfs_info3_param),
    VAR_3);
 if (*VAR_9 == ((void*)0)) {
  VAR_15 = -VAR_1;
  goto parse_DFS_referrals_exit;
 }


 for (VAR_14 = 0; VAR_14 < *VAR_8; VAR_14++) {
  char *VAR_18;
  int VAR_19;
  struct dfs_info3_param *VAR_20 = (*VAR_9)+VAR_14;

  VAR_20->flags = FUNC_10(VAR_6->DFSFlags);
  if (VAR_13) {
   __le16 *VAR_21 = FUNC_8(FUNC_11(VAR_12)*2 + 2,
      VAR_3);
   if (VAR_21 == ((void*)0)) {
    VAR_15 = -VAR_1;
    goto parse_DFS_referrals_exit;
   }
   FUNC_0((__le16 *) VAR_21, VAR_12,
        VAR_4, VAR_10, VAR_11);
   VAR_20->path_consumed = FUNC_3(VAR_21,
     FUNC_9(VAR_6->PathConsumed),
     VAR_10);
   FUNC_7(VAR_21);
  } else
   VAR_20->path_consumed = FUNC_9(VAR_6->PathConsumed);

  VAR_20->server_type = FUNC_9(VAR_17->ServerType);
  VAR_20->ref_flag = FUNC_9(VAR_17->ReferralEntryFlags);


  VAR_18 = (char *)VAR_17 + FUNC_9(VAR_17->DfsPathOffset);
  VAR_19 = VAR_16 - VAR_18;
  VAR_20->path_name = FUNC_2(VAR_18, VAR_19,
      VAR_13, VAR_10);
  if (!VAR_20->path_name) {
   VAR_15 = -VAR_1;
   goto parse_DFS_referrals_exit;
  }


  VAR_18 = (char *)VAR_17 + FUNC_9(VAR_17->NetworkAddressOffset);
  VAR_19 = VAR_16 - VAR_18;
  VAR_20->node_name = FUNC_2(VAR_18, VAR_19,
      VAR_13, VAR_10);
  if (!VAR_20->node_name) {
   VAR_15 = -VAR_1;
   goto parse_DFS_referrals_exit;
  }

  VAR_20->ttl = FUNC_10(VAR_17->TimeToLive);

  VAR_17++;
 }

parse_DFS_referrals_exit:
 if (VAR_15) {
  FUNC_5(*VAR_9, *VAR_8);
  *VAR_9 = ((void*)0);
  *VAR_8 = 0;
 }
 return VAR_15;
}
