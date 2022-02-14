
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct cfg80211_pmsr_request_peer {int addr; } ;
struct cfg80211_pmsr_request {int n_peers; struct cfg80211_pmsr_request_peer* peers; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int const*) ;

__attribute__((used)) static int FUNC_1(struct cfg80211_pmsr_request *VAR_1,
     const u8 *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1->n_peers; VAR_3++) {
  struct cfg80211_pmsr_request_peer *VAR_4 = &VAR_1->peers[VAR_3];

  if (FUNC_0(VAR_4->addr, VAR_2))
   return VAR_3;
 }

 return -VAR_0;
}
