
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u32 ;
struct bpf_prog {unsigned int pages; TYPE_1__* aux; } ;
typedef int gfp_t ;
struct TYPE_2__ {struct bpf_prog* prog; int user; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,unsigned int) ;
 int FUNC_2 (struct bpf_prog*) ;
 int FUNC_3 (int ,unsigned int) ;
 struct bpf_prog* FUNC_4 (unsigned int,int,int ) ;
 int FUNC_5 (struct bpf_prog*,struct bpf_prog*,unsigned int) ;
 unsigned int FUNC_6 (unsigned int,unsigned int) ;

struct bpf_prog *FUNC_7(struct bpf_prog *VAR_4, unsigned int VAR_5,
      gfp_t VAR_6)
{
 gfp_t VAR_7 = VAR_0 | VAR_3 | VAR_6;
 struct bpf_prog *VAR_8;
 u32 VAR_9, VAR_10;
 int VAR_11;

 FUNC_0(VAR_4 == ((void*)0));

 VAR_5 = FUNC_6(VAR_5, VAR_2);
 VAR_9 = VAR_5 / VAR_2;
 if (VAR_9 <= VAR_4->pages)
  return VAR_4;

 VAR_10 = VAR_9 - VAR_4->pages;
 VAR_11 = FUNC_1(VAR_4->aux->user, VAR_10);
 if (VAR_11)
  return ((void*)0);

 VAR_8 = FUNC_4(VAR_5, VAR_7, VAR_1);
 if (VAR_8 == ((void*)0)) {
  FUNC_3(VAR_4->aux->user, VAR_10);
 } else {
  FUNC_5(VAR_8, VAR_4, VAR_4->pages * VAR_2);
  VAR_8->pages = VAR_9;
  VAR_8->aux->prog = VAR_8;




  VAR_4->aux = ((void*)0);
  FUNC_2(VAR_4);
 }

 return VAR_8;
}
