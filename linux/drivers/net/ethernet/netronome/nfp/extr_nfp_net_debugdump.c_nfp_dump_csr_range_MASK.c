
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct nfp_pf {int cpp; } ;
struct TYPE_3__ {int cpp_id; int dump_length; int offset; } ;
struct TYPE_4__ {int type; } ;
struct nfp_dumpspec_csr {TYPE_1__ cpp; int register_width; TYPE_2__ tl; } ;
struct nfp_dump_state {struct nfp_dump_csr* p; } ;
struct nfp_dump_csr {void* error_offset; void* error; int register_width; TYPE_1__ cpp; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int,int,struct nfp_dump_state*) ;
 int FUNC_5 (int ,int,int,void*,int) ;
 int FUNC_6 (struct nfp_dumpspec_csr*) ;
 int FUNC_7 (TYPE_2__*,int ,struct nfp_dump_state*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,int,int*) ;

__attribute__((used)) static int
FUNC_10(struct nfp_pf *VAR_3, struct nfp_dumpspec_csr *VAR_4,
     struct nfp_dump_state *VAR_5)
{
 struct nfp_dump_csr *VAR_6 = VAR_5->p;
 u32 VAR_7, VAR_8, VAR_9;
 u32 VAR_10, VAR_11;
 int VAR_12;
 void *VAR_13;
 u32 VAR_14;
 int VAR_15;

 if (!FUNC_6(VAR_4))
  return FUNC_7(&VAR_4->tl, -VAR_1, VAR_5);

 VAR_7 = FUNC_1(VAR_4->register_width) / VAR_0;
 VAR_8 = FUNC_0(sizeof(*VAR_6));
 VAR_9 = VAR_8 +
       FUNC_0(FUNC_1(VAR_4->cpp.dump_length));
 VAR_13 = VAR_5->p + VAR_8;

 VAR_15 = FUNC_4(FUNC_1(VAR_4->tl.type), VAR_9, VAR_5);
 if (VAR_15)
  return VAR_15;

 VAR_6->cpp = VAR_4->cpp;
 VAR_6->register_width = VAR_4->register_width;

 VAR_14 = FUNC_8(&VAR_4->cpp.cpp_id);
 VAR_10 = FUNC_1(VAR_4->cpp.offset);
 VAR_11 = VAR_10 + FUNC_1(VAR_4->cpp.dump_length);

 while (VAR_10 < VAR_11) {
  if (FUNC_3(&VAR_4->cpp.cpp_id)) {
   VAR_15 = FUNC_9(VAR_3->cpp, VAR_10, (u32 *)VAR_13);
  } else {
   VAR_12 = FUNC_5(VAR_3->cpp, VAR_14, VAR_10,
        VAR_13, VAR_7);
   VAR_15 = VAR_12 == VAR_7 ? 0 : -VAR_2;
  }
  if (VAR_15) {
   VAR_6->error = FUNC_2(VAR_15);
   VAR_6->error_offset = FUNC_2(VAR_10);
   break;
  }
  VAR_10 += VAR_7;
  VAR_13 += VAR_7;
 }

 return 0;
}
