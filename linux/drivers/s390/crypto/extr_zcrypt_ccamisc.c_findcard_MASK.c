
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef int u16 ;
struct zcrypt_device_status_ext {int functions; int qid; scalar_t__ online; } ;
struct cca_info {int hwtype; char cur_mk_state; scalar_t__ cur_mkvp; char old_mk_state; scalar_t__ old_mkvp; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int ,int ,struct cca_info*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,struct cca_info*) ;
 scalar_t__ FUNC_5 (int ,int ,struct cca_info*) ;
 int FUNC_6 (struct zcrypt_device_status_ext*) ;
 struct zcrypt_device_status_ext* FUNC_7 (int,int,int ) ;
 int FUNC_8 (struct zcrypt_device_status_ext*) ;

__attribute__((used)) static int FUNC_9(u64 VAR_5, u16 *VAR_6, u16 *VAR_7,
      int VAR_8, int VAR_9)
{
 struct zcrypt_device_status_ext *VAR_10;
 u16 VAR_11, VAR_12;
 struct cca_info VAR_13;
 int VAR_14, VAR_15, VAR_16 = -1;


 if (VAR_5 == 0 || VAR_9 < 0)
  return -VAR_0;


 VAR_10 = FUNC_7(VAR_4,
          sizeof(struct zcrypt_device_status_ext),
          VAR_3);
 if (!VAR_10)
  return -VAR_2;
 FUNC_8(VAR_10);


 for (VAR_14 = 0; VAR_14 < VAR_4; VAR_14++) {
  VAR_11 = FUNC_0(VAR_10[VAR_14].qid);
  VAR_12 = FUNC_1(VAR_10[VAR_14].qid);
  if (VAR_10[VAR_14].online &&
      VAR_10[VAR_14].functions & 0x04) {

   if (FUNC_2(VAR_11, VAR_12, &VAR_13) == 0 &&
       VAR_13.hwtype >= VAR_9 &&
       VAR_13.cur_mk_state == '2' &&
       VAR_13.cur_mkvp == VAR_5) {
    if (!VAR_8)
     break;

    if (FUNC_5(VAR_11, VAR_12, &VAR_13) == 0) {
     FUNC_4(VAR_11, VAR_12, &VAR_13);
     if (VAR_13.hwtype >= VAR_9 &&
         VAR_13.cur_mk_state == '2' &&
         VAR_13.cur_mkvp == VAR_5)
      break;
    }
   }
  } else {


   FUNC_3(VAR_11, VAR_12);
  }
 }
 if (VAR_14 >= VAR_4) {

  for (VAR_14 = 0; VAR_14 < VAR_4; VAR_14++) {
   if (!(VAR_10[VAR_14].online &&
         VAR_10[VAR_14].functions & 0x04))
    continue;
   VAR_11 = FUNC_0(VAR_10[VAR_14].qid);
   VAR_12 = FUNC_1(VAR_10[VAR_14].qid);

   if (FUNC_5(VAR_11, VAR_12, &VAR_13) == 0) {
    FUNC_4(VAR_11, VAR_12, &VAR_13);
    if (VAR_13.hwtype >= VAR_9 &&
        VAR_13.cur_mk_state == '2' &&
        VAR_13.cur_mkvp == VAR_5)
     break;
    if (VAR_13.hwtype >= VAR_9 &&
        VAR_13.old_mk_state == '2' &&
        VAR_13.old_mkvp == VAR_5 &&
        VAR_16 < 0)
     VAR_16 = VAR_14;
   }
  }
  if (VAR_14 >= VAR_4 && VAR_16 >= 0) {

   VAR_11 = FUNC_0(VAR_10[VAR_16].qid);
   VAR_12 = FUNC_1(VAR_10[VAR_16].qid);
  }
 }
 if (VAR_14 < VAR_4 || VAR_16 >= 0) {
  if (VAR_6)
   *VAR_6 = VAR_11;
  if (VAR_7)
   *VAR_7 = VAR_12;
  VAR_15 = (VAR_14 < VAR_4 ? 0 : 1);
 } else
  VAR_15 = -VAR_1;

 FUNC_6(VAR_10);
 return VAR_15;
}
