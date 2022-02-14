
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct qbman_swp {TYPE_1__* desc; } ;
struct qbman_release_desc {unsigned int verb; int bpid; int * buf; } ;
struct TYPE_2__ {int qman_version; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 unsigned int FUNC_4 (int ) ;
 int FUNC_5 (int const) ;
 int FUNC_6 () ;
 struct qbman_release_desc* FUNC_7 (struct qbman_swp*,int ) ;
 int FUNC_8 (struct qbman_swp*,int ) ;
 int FUNC_9 (struct qbman_swp*,scalar_t__,int ) ;

int FUNC_10(struct qbman_swp *VAR_7, const struct qbman_release_desc *VAR_8,
        const u64 *VAR_9, unsigned int VAR_10)
{
 int VAR_11;
 struct qbman_release_desc *VAR_12;
 u32 VAR_13;

 if (!VAR_10 || (VAR_10 > 7))
  return -VAR_1;

 VAR_13 = FUNC_8(VAR_7, VAR_2);
 if (!FUNC_3(VAR_13))
  return -VAR_0;


 if ((VAR_7->desc->qman_version & VAR_5) < VAR_4)
  VAR_12 = FUNC_7(VAR_7, FUNC_0(FUNC_2(VAR_13)));
 else
  VAR_12 = FUNC_7(VAR_7, FUNC_1(FUNC_2(VAR_13)));

 for (VAR_11 = 0; VAR_11 < VAR_10; VAR_11++)
  VAR_12->buf[VAR_11] = FUNC_5(VAR_9[VAR_11]);
 VAR_12->bpid = VAR_8->bpid;

 if ((VAR_7->desc->qman_version & VAR_5) < VAR_4) {




  FUNC_6();
  VAR_12->verb = VAR_8->verb | FUNC_4(VAR_13) | VAR_10;
 } else {
  VAR_12->verb = VAR_8->verb | FUNC_4(VAR_13) | VAR_10;
  FUNC_6();
  FUNC_9(VAR_7, VAR_3 +
         FUNC_2(VAR_13) * 4, VAR_6);
 }

 return 0;
}
