
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct qed_hwfn {TYPE_1__* stream; } ;
struct TYPE_4__ {int avail_in; int avail_out; int total_out; int msg; int * next_out; int * next_in; } ;


 int FUNC_0 (struct qed_hwfn*,int ,char*,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ) ;

u32 FUNC_4(struct qed_hwfn *VAR_5, u32 VAR_6,
     u8 *VAR_7, u32 VAR_8, u8 *VAR_9)
{
 int VAR_10;

 VAR_5->stream->next_in = VAR_7;
 VAR_5->stream->avail_in = VAR_6;
 VAR_5->stream->next_out = VAR_9;
 VAR_5->stream->avail_out = VAR_8;

 VAR_10 = FUNC_3(VAR_5->stream, VAR_0);

 if (VAR_10 != VAR_3) {
  FUNC_0(VAR_5, VAR_1, "zlib init failed, rc = %d\n",
      VAR_10);
  return 0;
 }

 VAR_10 = FUNC_1(VAR_5->stream, VAR_2);
 FUNC_2(VAR_5->stream);

 if (VAR_10 != VAR_3 && VAR_10 != VAR_4) {
  FUNC_0(VAR_5, VAR_1, "FW unzip error: %s, rc=%d\n",
      VAR_5->stream->msg, VAR_10);
  return 0;
 }

 return VAR_5->stream->total_out / 4;
}
