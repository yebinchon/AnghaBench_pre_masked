
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct pt3_adapter {int buf_idx; int buf_ofs; scalar_t__ num_discard; int demux; TYPE_1__* buffer; } ;
struct TYPE_2__ {scalar_t__* data; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,scalar_t__*,int) ;
 scalar_t__* FUNC_1 (struct pt3_adapter*,int*,int*) ;

int FUNC_2(struct pt3_adapter *VAR_4)
{
 int VAR_5, VAR_6;

 VAR_5 = VAR_4->buf_idx;
 VAR_6 = VAR_4->buf_ofs;

 if (VAR_4->buffer[VAR_5].data[VAR_6] == VAR_2)
  return 0;

 while (*FUNC_1(VAR_4, &VAR_5, &VAR_6) != VAR_2) {
  u8 *VAR_7;

  VAR_7 = &VAR_4->buffer[VAR_4->buf_idx].data[VAR_4->buf_ofs];
  if (VAR_4->num_discard > 0)
   VAR_4->num_discard--;
  else if (VAR_4->buf_ofs + VAR_1 > VAR_0) {
   FUNC_0(&VAR_4->demux, VAR_7,
    (VAR_0 - VAR_4->buf_ofs) / VAR_3);
   FUNC_0(&VAR_4->demux,
    VAR_4->buffer[VAR_5].data, VAR_6 / VAR_3);
  } else
   FUNC_0(&VAR_4->demux, VAR_7,
    VAR_1 / VAR_3);

  *VAR_7 = VAR_2;
  VAR_4->buf_idx = VAR_5;
  VAR_4->buf_ofs = VAR_6;
 }
 return 0;
}
