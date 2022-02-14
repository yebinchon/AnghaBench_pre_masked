
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct scif_pollepd {int events; int revents; TYPE_3__* epd; } ;
struct TYPE_4__ {int _key; int * _qproc; } ;
struct poll_wqueues {int error; TYPE_1__ pt; } ;
typedef TYPE_1__ poll_table ;
typedef int __poll_t ;
struct TYPE_5__ {int anon; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,TYPE_1__*,TYPE_3__*) ;
 int VAR_4 ;
 int FUNC_1 (long) ;
 int FUNC_2 (struct poll_wqueues*) ;
 int FUNC_3 (struct poll_wqueues*) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;

int
FUNC_6(struct scif_pollepd *VAR_5, unsigned int VAR_6, long VAR_7)
{
 struct poll_wqueues VAR_8;
 poll_table *VAR_9;
 int VAR_10, VAR_11 = 0, VAR_12 = VAR_7 == 0;
 __poll_t VAR_13;
 u64 VAR_14 = VAR_7 < 0 ? VAR_3
  : FUNC_1(VAR_7);

 FUNC_3(&VAR_8);
 VAR_9 = &VAR_8.pt;
 while (1) {
  for (VAR_10 = 0; VAR_10 < VAR_6; VAR_10++) {
   VAR_9->_key = VAR_5[VAR_10].events | VAR_1 | VAR_2;
   VAR_13 = FUNC_0(VAR_5[VAR_10].epd->anon,
          VAR_9, VAR_5[VAR_10].epd);
   VAR_13 &= VAR_5[VAR_10].events | VAR_1 | VAR_2;
   if (VAR_13) {
    VAR_11++;
    VAR_9->_qproc = ((void*)0);
   }
   VAR_5[VAR_10].revents = VAR_13;
  }
  VAR_9->_qproc = ((void*)0);
  if (!VAR_11) {
   VAR_11 = VAR_8.error;
   if (FUNC_5(VAR_4))
    VAR_11 = -VAR_0;
  }
  if (VAR_11 || VAR_12)
   break;

  if (!FUNC_4(VAR_14))
   VAR_12 = 1;
 }
 FUNC_2(&VAR_8);
 return VAR_11;
}
