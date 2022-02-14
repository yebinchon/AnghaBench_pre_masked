
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tb_service_id {int match_flags; scalar_t__ protocol_id; scalar_t__ protocol_version; scalar_t__ protocol_revision; int protocol_key; } ;
struct tb_service {scalar_t__ prtcid; scalar_t__ prtcvers; scalar_t__ prtcrevs; int key; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static bool FUNC_1(const struct tb_service_id *VAR_3,
        const struct tb_service *VAR_4)
{
 if (VAR_3->match_flags & VAR_1) {
  if (FUNC_0(VAR_3->protocol_key, VAR_4->key))
   return 0;
 }

 if (VAR_3->match_flags & VAR_0) {
  if (VAR_3->protocol_id != VAR_4->prtcid)
   return 0;
 }

 if (VAR_3->match_flags & VAR_2) {
  if (VAR_3->protocol_version != VAR_4->prtcvers)
   return 0;
 }

 if (VAR_3->match_flags & VAR_2) {
  if (VAR_3->protocol_revision != VAR_4->prtcrevs)
   return 0;
 }

 return 1;
}
