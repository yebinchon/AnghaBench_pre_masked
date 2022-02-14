
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_param_list {int extra_response_list; int param_list; } ;
struct iscsi_param {int dummy; } ;


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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int FUNC_0 (int *) ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 int VAR_56 ;
 int VAR_57 ;
 int VAR_58 ;
 int VAR_59 ;
 int VAR_60 ;
 int VAR_61 ;
 int VAR_62 ;
 int VAR_63 ;
 int VAR_64 ;
 int VAR_65 ;
 int VAR_66 ;
 int VAR_67 ;
 int VAR_68 ;
 int VAR_69 ;
 int VAR_70 ;
 int VAR_71 ;
 int VAR_72 ;
 int VAR_73 ;
 int VAR_74 ;
 int VAR_75 ;
 int VAR_76 ;
 int VAR_77 ;
 int VAR_78 ;
 int VAR_79 ;
 int VAR_80 ;
 int VAR_81 ;
 int VAR_82 ;
 int VAR_83 ;
 int VAR_84 ;
 int VAR_85 ;
 int VAR_86 ;
 int VAR_87 ;
 int VAR_88 ;
 int FUNC_1 (struct iscsi_param_list*) ;
 struct iscsi_param* FUNC_2 (struct iscsi_param_list*,int ,int ,int ,int ,int ,int ,int ) ;
 struct iscsi_param_list* FUNC_3 (int,int ) ;
 int FUNC_4 (char*) ;

int FUNC_5(struct iscsi_param_list **VAR_89)
{
 struct iscsi_param *VAR_90 = ((void*)0);
 struct iscsi_param_list *VAR_91;

 VAR_91 = FUNC_3(sizeof(struct iscsi_param_list), VAR_9);
 if (!VAR_91) {
  FUNC_4("Unable to allocate memory for"
    " struct iscsi_param_list.\n");
  return -VAR_6;
 }
 FUNC_0(&VAR_91->param_list);
 FUNC_0(&VAR_91->extra_response_list);
 VAR_90 = FUNC_2(VAR_91, VAR_0, VAR_15,
   VAR_59, VAR_61, VAR_63,
   VAR_78, VAR_87);
 if (!VAR_90)
  goto out;

 VAR_90 = FUNC_2(VAR_91, VAR_10, VAR_23,
   VAR_58, VAR_61, VAR_63,
   VAR_81, VAR_87);
 if (!VAR_90)
  goto out;

 VAR_90 = FUNC_2(VAR_91, VAR_1, VAR_16,
   VAR_58, VAR_61, VAR_63,
   VAR_81, VAR_87);
 if (!VAR_90)
  goto out;

 VAR_90 = FUNC_2(VAR_91, VAR_50,
   VAR_32, VAR_58,
   VAR_62, VAR_63,
   VAR_76, VAR_88);
 if (!VAR_90)
  goto out;

 VAR_90 = FUNC_2(VAR_91, VAR_66, VAR_39,
   VAR_57, VAR_62, VAR_64,
   VAR_85, 0);
 if (!VAR_90)
  goto out;

 VAR_90 = FUNC_2(VAR_91, VAR_70, VAR_43,
   VAR_56, VAR_62, VAR_63,
   VAR_82, VAR_86);
 if (!VAR_90)
  goto out;

 VAR_90 = FUNC_2(VAR_91, VAR_47,
   VAR_29, VAR_56,
   VAR_62, VAR_64,
   VAR_82, VAR_87);
 if (!VAR_90)
  goto out;

 VAR_90 = FUNC_2(VAR_91, VAR_69, VAR_42,
   VAR_56, VAR_62, VAR_65,
   VAR_85, VAR_86);
 if (!VAR_90)
  goto out;

 VAR_90 = FUNC_2(VAR_91, VAR_46,
   VAR_28, VAR_56,
   VAR_62, VAR_64, VAR_85,
   VAR_86);
 if (!VAR_90)
  goto out;

 VAR_90 = FUNC_2(VAR_91, VAR_68,
   VAR_41, VAR_56,
   VAR_62, VAR_65,
   VAR_84, VAR_86);
 if (!VAR_90)
  goto out;

 VAR_90 = FUNC_2(VAR_91, VAR_71,
   VAR_44,
   VAR_56, VAR_62, VAR_65,
   VAR_75, VAR_87);
 if (!VAR_90)
  goto out;

 VAR_90 = FUNC_2(VAR_91, VAR_14, VAR_27,
   VAR_58, VAR_62, VAR_63,
   VAR_80, VAR_88);
 if (!VAR_90)
  goto out;

 VAR_90 = FUNC_2(VAR_91, VAR_13,
   VAR_26, VAR_58,
   VAR_62, VAR_63, VAR_79,
   VAR_88);
 if (!VAR_90)
  goto out;

 VAR_90 = FUNC_2(VAR_91, VAR_53,
   VAR_35,
   VAR_58, VAR_61, VAR_63,
   VAR_77, VAR_86);
 if (!VAR_90)
  goto out;

 VAR_90 = FUNC_2(VAR_91, VAR_52,
   VAR_34,
   VAR_58, VAR_61, VAR_63,
   VAR_77, VAR_86);
 if (!VAR_90)
  goto out;

 VAR_90 = FUNC_2(VAR_91, VAR_49,
   VAR_31, VAR_58,
   VAR_62, VAR_63,
   VAR_77, VAR_88);
 if (!VAR_90)
  goto out;

 VAR_90 = FUNC_2(VAR_91, VAR_8,
   VAR_22,
   VAR_58, VAR_62, VAR_63,
   VAR_77, VAR_88);
 if (!VAR_90)
  goto out;

 VAR_90 = FUNC_2(VAR_91, VAR_5,
   VAR_20,
   VAR_58, VAR_62, VAR_63,
   VAR_74, VAR_88);
 if (!VAR_90)
  goto out;

 VAR_90 = FUNC_2(VAR_91, VAR_4,
   VAR_19,
   VAR_58, VAR_62, VAR_63,
   VAR_74, VAR_88);
 if (!VAR_90)
  goto out;

 VAR_90 = FUNC_2(VAR_91, VAR_51,
   VAR_33,
   VAR_58, VAR_62, VAR_63,
   VAR_76, VAR_88);
 if (!VAR_90)
  goto out;

 VAR_90 = FUNC_2(VAR_91, VAR_2,
   VAR_17, VAR_58,
   VAR_62, VAR_63, VAR_80,
   VAR_88);
 if (!VAR_90)
  goto out;

 VAR_90 = FUNC_2(VAR_91, VAR_3,
   VAR_18,
   VAR_58, VAR_62, VAR_63,
   VAR_80, VAR_88);
 if (!VAR_90)
  goto out;

 VAR_90 = FUNC_2(VAR_91, VAR_7,
   VAR_21,
   VAR_58, VAR_62, VAR_63,
   VAR_73, VAR_88);
 if (!VAR_90)
  goto out;

 VAR_90 = FUNC_2(VAR_91, VAR_67, VAR_40,
   VAR_56, VAR_62, VAR_64,
   VAR_83, VAR_88);
 if (!VAR_90)
  goto out;

 VAR_90 = FUNC_2(VAR_91, VAR_11, VAR_24,
   VAR_58, VAR_61, VAR_63,
   VAR_79, VAR_87);
 if (!VAR_90)
  goto out;

 VAR_90 = FUNC_2(VAR_91, VAR_54, VAR_36,
   VAR_58, VAR_61, VAR_63,
   VAR_79, VAR_87);
 if (!VAR_90)
  goto out;

 VAR_90 = FUNC_2(VAR_91, VAR_12, VAR_25,
   VAR_58, VAR_61, VAR_63,
   VAR_85, VAR_87);
 if (!VAR_90)
  goto out;

 VAR_90 = FUNC_2(VAR_91, VAR_55, VAR_37,
   VAR_58, VAR_61, VAR_63,
   VAR_85, VAR_87);
 if (!VAR_90)
  goto out;




 VAR_90 = FUNC_2(VAR_91, VAR_60, VAR_38,
   VAR_58, VAR_62, VAR_63,
   VAR_79, VAR_88);
 if (!VAR_90)
  goto out;

 VAR_90 = FUNC_2(VAR_91, VAR_48,
   VAR_30,
   VAR_58, VAR_61, VAR_63,
   VAR_77, VAR_86);
 if (!VAR_90)
  goto out;

 VAR_90 = FUNC_2(VAR_91, VAR_72,
   VAR_45,
   VAR_58, VAR_61, VAR_63,
   VAR_77, VAR_86);
 if (!VAR_90)
  goto out;

 *VAR_89 = VAR_91;
 return 0;
out:
 FUNC_1(VAR_91);
 return -1;
}
