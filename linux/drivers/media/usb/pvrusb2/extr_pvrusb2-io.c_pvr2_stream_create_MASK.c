
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pvr2_stream {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct pvr2_stream* FUNC_0 (int,int ) ;
 int FUNC_1 (struct pvr2_stream*) ;
 int FUNC_2 (int ,char*,struct pvr2_stream*) ;

struct pvr2_stream *FUNC_3(void)
{
 struct pvr2_stream *VAR_2;
 VAR_2 = FUNC_0(sizeof(*VAR_2), VAR_0);
 if (!VAR_2) return VAR_2;
 FUNC_2(VAR_1, "pvr2_stream_create: sp=%p", VAR_2);
 FUNC_1(VAR_2);
 return VAR_2;
}
