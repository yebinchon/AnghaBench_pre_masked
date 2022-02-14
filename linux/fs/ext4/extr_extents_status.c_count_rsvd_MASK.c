
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsvd_count {int first_do_lblk_found; int partial; scalar_t__ lclu; scalar_t__ ndelonly; scalar_t__ last_do_lblk; scalar_t__ first_do_lblk; } ;
struct inode {int i_sb; } ;
struct extent_status {scalar_t__ es_lblk; } ;
struct ext4_sb_info {int s_cluster_ratio; scalar_t__ s_cluster_bits; } ;
typedef scalar_t__ ext4_lblk_t ;


 scalar_t__ FUNC_0 (struct ext4_sb_info*,scalar_t__) ;
 scalar_t__ FUNC_1 (struct ext4_sb_info*,scalar_t__) ;
 scalar_t__ FUNC_2 (struct ext4_sb_info*,scalar_t__) ;
 struct ext4_sb_info* FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (struct extent_status*) ;
 int FUNC_6 (struct extent_status*) ;

__attribute__((used)) static void FUNC_7(struct inode *VAR_0, ext4_lblk_t VAR_1, long VAR_2,
         struct extent_status *VAR_3, struct rsvd_count *VAR_4)
{
 struct ext4_sb_info *VAR_5 = FUNC_3(VAR_0->i_sb);
 ext4_lblk_t VAR_6, VAR_7, VAR_8;

 if (!FUNC_6(VAR_3))
  return;

 FUNC_4(VAR_2 <= 0);

 if (VAR_5->s_cluster_ratio == 1) {
  VAR_4->ndelonly += (int) VAR_2;
  return;
 }



 VAR_6 = (VAR_1 < VAR_3->es_lblk) ? VAR_3->es_lblk : VAR_1;
 VAR_7 = VAR_1 + (ext4_lblk_t) VAR_2 - 1;
 VAR_7 = (VAR_7 > FUNC_5(VAR_3)) ? FUNC_5(VAR_3) : VAR_7;


 if (VAR_4->first_do_lblk_found == 0) {
  VAR_4->first_do_lblk = VAR_6;
  VAR_4->first_do_lblk_found = 1;
 }


 VAR_4->last_do_lblk = VAR_7;





 if (VAR_4->partial && (VAR_4->lclu != FUNC_0(VAR_5, VAR_6))) {
  VAR_4->ndelonly++;
  VAR_4->partial = 0;
 }





 if (FUNC_2(VAR_5, VAR_6) != 0) {
  if (VAR_7 >= FUNC_1(VAR_5, VAR_6)) {
   VAR_4->ndelonly++;
   VAR_4->partial = 0;
   VAR_6 = FUNC_1(VAR_5, VAR_6) + 1;
  }
 }





 if ((VAR_6 + VAR_5->s_cluster_ratio - 1) <= VAR_7) {
  VAR_8 = (VAR_7 - VAR_6 + 1) >> VAR_5->s_cluster_bits;
  VAR_4->ndelonly += VAR_8;
  VAR_6 += VAR_8 << VAR_5->s_cluster_bits;
 }





 if (!VAR_4->partial && VAR_6 <= VAR_7) {
  VAR_4->partial = 1;
  VAR_4->lclu = FUNC_0(VAR_5, VAR_6);
 }
}
