
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_prog {void* tgt_abort; void* tgt_out; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct nfp_prog*,int ,int ,int ,int ) ;
 int FUNC_1 (struct nfp_prog*,int ,void*,int ) ;
 int FUNC_2 (struct nfp_prog*,int ,int ,int,int ) ;
 int FUNC_3 (struct nfp_prog*,int ,int,int ,int ,int) ;
 int FUNC_4 (struct nfp_prog*,int ,int ,int ,int ,int ,int) ;
 void* FUNC_5 (struct nfp_prog*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 () ;
 int FUNC_10 (struct nfp_prog*,int ,int) ;
 int FUNC_11 (struct nfp_prog*,int ,int ) ;

__attribute__((used)) static void FUNC_12(struct nfp_prog *VAR_11)
{
 VAR_11->tgt_abort = FUNC_5(VAR_11);

 FUNC_2(VAR_11, VAR_4, VAR_3, 2, VAR_6);

 FUNC_11(VAR_11, FUNC_6(0), VAR_5);
 FUNC_3(VAR_11, FUNC_6(0), 0xc, FUNC_8(0x82), VAR_9, 16);


 VAR_11->tgt_out = FUNC_5(VAR_11);


 FUNC_0(VAR_11, FUNC_9(), FUNC_8(3), VAR_1, FUNC_7(0));
 FUNC_1(VAR_11, VAR_2, VAR_11->tgt_abort, 0);

 FUNC_10(VAR_11, FUNC_7(2), 0x44112282);

 FUNC_4(VAR_11, FUNC_6(1),
   FUNC_9(), VAR_8, FUNC_7(0), VAR_9, 3);

 FUNC_0(VAR_11, FUNC_9(), FUNC_6(1), VAR_0, FUNC_8(0));
 FUNC_4(VAR_11, FUNC_7(2),
   FUNC_8(0xff), VAR_7, FUNC_7(2), VAR_10, 0);

 FUNC_2(VAR_11, VAR_4, VAR_3, 2, VAR_6);

 FUNC_11(VAR_11, FUNC_6(0), VAR_5);
 FUNC_3(VAR_11, FUNC_6(0), 0xc, FUNC_7(2), VAR_9, 16);
}
