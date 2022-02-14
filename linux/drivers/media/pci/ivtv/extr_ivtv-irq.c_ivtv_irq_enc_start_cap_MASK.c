
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ivtv_stream {int s_flags; } ;
struct ivtv {struct ivtv_stream* streams; int enc_mbox; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int,int,int) ;
 int FUNC_1 (char*,int,int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *,int ,int,int*) ;
 size_t* VAR_4 ;
 scalar_t__ FUNC_3 (struct ivtv_stream*) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (struct ivtv_stream*,int*) ;

__attribute__((used)) static void FUNC_6(struct ivtv *VAR_5)
{
 u32 VAR_6[VAR_0];
 struct ivtv_stream *VAR_7;


 FUNC_2(&VAR_5->enc_mbox, VAR_3, 7, VAR_6);
 FUNC_0("ENC START CAP %d: %08x %08x\n", VAR_6[0], VAR_6[1], VAR_6[2]);

 if (VAR_6[0] > 2 || VAR_6[1] == 0 || VAR_6[2] == 0) {
  FUNC_1("Unknown input: %08x %08x %08x\n",
    VAR_6[0], VAR_6[1], VAR_6[2]);
  return;
 }
 VAR_7 = &VAR_5->streams[VAR_4[VAR_6[0]]];
 if (!FUNC_5(VAR_7, VAR_6)) {
  FUNC_4(FUNC_3(VAR_7) ? VAR_2 : VAR_1, &VAR_7->s_flags);
 }
}
