
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct iwl_trans {scalar_t__ rx_mpdu_cmd; int rx_mpdu_cmd_hdr_size; } ;
struct iwl_cmd_header {scalar_t__ cmd; } ;
struct ieee80211_hdr {int frame_control; } ;
typedef int __le32 ;


 size_t FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline size_t FUNC_2(const struct iwl_trans *VAR_0,
          void *VAR_1, size_t VAR_2,
          size_t *VAR_3)
{
 struct iwl_cmd_header *VAR_4 = (void *)((u8 *)VAR_1 + sizeof(__le32));
 struct ieee80211_hdr *VAR_5 = ((void*)0);
 size_t VAR_6;

 if (VAR_4->cmd != VAR_0->rx_mpdu_cmd)
  return VAR_2;

 VAR_6 = sizeof(struct iwl_cmd_header) +
       VAR_0->rx_mpdu_cmd_hdr_size;

 if (VAR_3)
  *VAR_3 = VAR_6;

 VAR_5 = (void *)((u8 *)VAR_4 + VAR_6);
 if (!FUNC_1(VAR_5->frame_control))
  return VAR_2;

 return sizeof(__le32) + sizeof(*VAR_4) + VAR_0->rx_mpdu_cmd_hdr_size +
  FUNC_0(VAR_5->frame_control);
}
